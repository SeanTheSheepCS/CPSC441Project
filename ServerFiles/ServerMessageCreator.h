#ifndef SERVER_MESSAGE_CREATOR_H
#define SERVER_MESSAGE_CREATOR_H

#include "../CommonFiles/MessageCodes.h"
#include "../CommonFiles/Posting.h"
#include "../CommonFiles/Message.h"
#include "../CommonFiles/UserMessage.h"
#include "../CommonFiles/AllMessageTypes.h"

class ServerMessageCreator
{
  public:
    ServerMessageCreator();
    LoginAuthMessage createLoginAuthMessage(bool whetherTheLoginWasAccepted);
#if 0
    Message createLogoutConfirmMessage(bool whetherTheLogoutWasSuccessful);
    Message createUserMessageDataMessage(UserMessage userMessageToConvertToMessage);
    Message createUserMessageImageDataMessage(UserMessageImage messageImageToConvertToMessage);
    Message createPostingDataMessage(Posting postingToConvertToMessage);
    Message createPostingImageDataMessage(PostingImage postingImageToConvertToMessage);
    //TWO MESSAGES TO IMPLEMENT LATER...
    //ASKCLIENTTOREQEUSTMESSAGEINFO FUNCTION GOES HERE
    //ASKCLIENTTOREQUESTBOARDINFO FUNCTION GOES HERE
    Message createErrorNoAuthMessage();
    Message createUserNotFoundMessage();
    Message createBoardNotFoundMessage();
    Message createErrorWriteFailedMessage();
    Message createWriteSuccessFulMessage();
    Message createEndOfDataMessage();
#endif
  protected:
    //
  private:
    VariableLengthQuantityConverter vlqConverter;
};

#endif
