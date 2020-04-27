package sample


data class QuestionResources(
  val trueLabel: String,
  val falseLabel: String,
  val cheatLabel: String,
  val nextLabel: String,
  val correctLabel: String,
  val incorrectLabel: String,
  val questions: List<String>,
  val answers: List<String>
)

data class QuestionData(
  val trueLabel: String, val falseLabel: String,
  val cheatLabel: String, val nextLabel: String
)

data class ResultData(
  val correctLabel: String, val incorrectLabel: String
)

class QuestionModel(
  private val resources: QuestionResources
): QuestionModelContract{

  var quizIndex = 0

  override fun incrCurrentIndex() {
    quizIndex++
  }

  override fun getCurrentIndex(): Int {
    return quizIndex
  }

  override fun setCurrentIndex(index: Int) {
    quizIndex = index
  }

  override fun fetchQuestionData(): QuestionData {
    return QuestionData(
      resources.trueLabel, resources.falseLabel,
      resources.cheatLabel, resources.nextLabel
    )
  }

  override fun fetchResultData(): ResultData {
    return ResultData(resources.correctLabel, resources.incorrectLabel)
  }


  override fun getCurrentAnswer(): Boolean {
    return resources.answers.get(quizIndex).toBoolean()
  }


  override fun getCurrentQuestion(): String {
    return resources.questions.get(quizIndex)
  }

}
