package sample


class QuestionRouter(
  private val mediator: AppMediator
) : QuestionRouterContract {

  override fun passDataToCheatScreen(answer: Boolean) {
    mediator.questionToCheatState = QuestionToCheatState(answer)
  }

  override fun getDataFromCheatScreen(): Boolean {

    val state = mediator.cheatToQuestionState
    return state?.cheated ?: false
  }

}
