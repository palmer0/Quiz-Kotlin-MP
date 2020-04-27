package sample

interface PlatformProtocol {
  fun getQuestionResources(): QuestionResources
}

actual class PlatformResources actual constructor(
  private val view: QuestionViewContract
) {
  private lateinit var platformProtocol: PlatformProtocol

  fun setImplementation(protocol: PlatformProtocol) {
    platformProtocol=protocol;
  }

  actual fun getQuestionResources(): QuestionResources {
    return platformProtocol.getQuestionResources()
  }

}

