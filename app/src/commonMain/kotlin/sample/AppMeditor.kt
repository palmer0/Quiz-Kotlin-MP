package sample

import kotlin.native.concurrent.ThreadLocal

data class CheatToQuestionState(val cheated: Boolean)
data class QuestionToCheatState(val answer: Boolean)

@ThreadLocal
object AppMediator {

  var questionState: QuestionState = QuestionState()

  var questionToCheatState: QuestionToCheatState? = null
  var cheatToQuestionState: CheatToQuestionState? = null

}