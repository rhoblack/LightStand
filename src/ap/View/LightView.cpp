#include "LightView.h"

LightView::LightView(Led *led)
{
    lightLed = led;
    lightState = OFF;
}

LightView::~LightView()
{
}

void LightView::On()
{
    lightLed->On();
}

void LightView::Off()
{
    lightLed->Off();
}

void LightView::run()
{
    switch (lightState)
    {
    case OFF:
        lightLed->Off();
        break;
    case ON:
        lightLed->On();
        break;
    }
}
