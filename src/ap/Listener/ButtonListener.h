#ifndef __BUTTONLISTENER_H__
#define __BUTTONLISTENER_H__

#include "Button.h"
#include "StandService.h"

class ButtonListener
{
private:
    Button *modeButton;
    StandService *standService;

public:
    ButtonListener(Button *button, StandService *service);
    virtual ~ButtonListener();
    void checkButton();

};

#endif /* __BUTTONLISTENER_H__ */
