#include "ButtonListener.h"

ButtonListener::ButtonListener(Button *button, StandService *service)
{
    modeButton = button;
    standService = service;
}

ButtonListener::~ButtonListener()
{
    delete modeButton;
    delete standService;
}

void ButtonListener::checkButton()
{
    if (modeButton->getState() == RELEASE_ACTIVE) {
        standService->notify("button");
    }
}
