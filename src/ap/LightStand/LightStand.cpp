#include <unistd.h>
#include "LightStand.h"

LightStand::LightStand()
{
    apInit();
}

LightStand::~LightStand()
{
    delete button;
    delete led;
    delete listener;
    delete service;
    delete view;
}

void LightStand::apInit()
{

    button = new Button(27);
    led = new Led(25);
    view = new LightView(led);
    service = new StandService(view);
    listener = new ButtonListener(button, service);
}

void LightStand::run()
{
    listener->checkButton();
    view->run();
    usleep(50000);
}
