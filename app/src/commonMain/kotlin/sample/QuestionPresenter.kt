package sample

class QuestionState() {

  var quizIndex: Int = 0

  var questionText: String? = null
  var resultText: String? = null

  var trueLabel: String? = null
  var falseLabel: String? = null
  var cheatLabel: String? = null
  var nextLabel: String? = null

  var trueEnabled: Boolean = true
  var falseEnabled: Boolean = true
  var cheatEnabled: Boolean = true
  var nextEnabled: Boolean = false
}

data class QuestionViewModel(
  val questionText: String?, val resultText: String?,
  val trueLabel: String?, val falseLabel: String?,
  val cheatLabel: String?, val nextLabel: String?,
  val trueEnabled: Boolean, val falseEnabled: Boolean,
  val cheatEnabled: Boolean, val nextEnabled: Boolean
)


class QuestionPresenter(
  private var state: QuestionState
): QuestionPresenterContract {

  override lateinit var view: QuestionViewContract
  override lateinit var model: QuestionModelContract
  override lateinit var router: QuestionRouterContract

  override fun fetchScreenData() {

    val cheated = router.getDataFromCheatScreen()

    if (cheated) {
      clickNextButton()
      return
    }

    // Call the model
    val data = model.fetchQuestionData()

    with(state) {
      model.setCurrentIndex(quizIndex)

      questionText = model.getCurrentQuestion()

      trueLabel = data.trueLabel
      falseLabel = data.falseLabel
      cheatLabel = data.cheatLabel
      nextLabel = data.nextLabel
    }


    // Call the view
    view.displayQuestionData(getScreenData())
  }


  private fun fetchAnswerData(userAnswer: Boolean) {

    // Call the model
    val answer = model.getCurrentAnswer()
    val data = model.fetchResultData()

    state.apply {

      if (answer == userAnswer) {
        resultText = data.correctLabel
      } else {
        resultText = data.incorrectLabel
      }

      trueEnabled = false
      falseEnabled = false
      cheatEnabled = false
      nextEnabled = true
    }

    // Call the view
    view.displayQuestionData(getScreenData())

  }

  override fun clickNextButton() {

    model.incrCurrentIndex()

    with(state) {

      quizIndex = model.getCurrentIndex()

      questionText = model.getCurrentQuestion()
      resultText = ""

      trueEnabled = true
      falseEnabled = true
      cheatEnabled = true
      nextEnabled = false
    }

    // Call the view
    view.displayQuestionData(getScreenData())
  }


  override fun clickCheatButton() {
    val answer = model.getCurrentAnswer()

    router.passDataToCheatScreen(answer)
    view.navigateToCheatScreen()
  }

  override fun clickFalseButton() {
    fetchAnswerData(false)
  }

  override fun clickTrueButton() {
    fetchAnswerData(true)
  }


  private fun getScreenData(): QuestionViewModel {

    return QuestionViewModel(
      state.questionText, state.resultText,
      state.trueLabel, state.falseLabel,
      state.cheatLabel, state.nextLabel,
      state.trueEnabled, state.falseEnabled,
      state.cheatEnabled, state.nextEnabled
    )
  }

}
