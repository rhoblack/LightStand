#ifndef __LIGHTSTAND_H__
#define __LIGHTSTAND_H__

#include "ButtonListener.h"
#include "Button.h"
#include "StandService.h"
#include "LightView.h"
#include "Led.h"

class LightStand
{
private:
    Button *button;
    ButtonListener *listener;
    StandService *service;
    LightView *view;
    Led *led;

public:
    LightStand();
    virtual ~LightStand();
    void apInit();
    void run();
};

#endif /* __LIGHTSTAND_H__ */