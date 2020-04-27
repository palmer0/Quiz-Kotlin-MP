package sample


interface QuestionViewContract {
  var presenter: QuestionPresenterContract

  fun displayQuestionData(viewModel: QuestionViewModel)
  fun navigateToCheatScreen()
}

interface QuestionPresenterContract {
  var view: QuestionViewContract
  var model: QuestionModelContract
  var router: QuestionRouterContract

  fun fetchScreenData()
  fun clickNextButton()
  fun clickCheatButton()
  fun clickFalseButton()
  fun clickTrueButton()
}

interface QuestionModelContract {

  fun fetchQuestionData(): QuestionData
  fun fetchResultData(): ResultData
  fun getCurrentAnswer(): Boolean
  fun getCurrentQuestion(): String
  fun incrCurrentIndex()
  fun getCurrentIndex(): Int
  fun setCurrentIndex(index: Int)
}

interface QuestionRouterContract {
  fun getDataFromCheatScreen(): Boolean
  fun passDataToCheatScreen(answer: Boolean)
}

