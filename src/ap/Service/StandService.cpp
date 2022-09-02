#include "StandService.h"

StandService::StandService(LightView *view)
{
    lightView = view;
    setLightState(OFF);
}

StandService::~StandService()
{
    delete lightView;
}

void StandService::notify(std::string devName)
{
    switch (getLightState())
    {
    case LIGHT_OFF:
        if (devName == "button")
        {
            setLightState(ON);
            lightView->setLightState(getLightState());
        }
        break;
    case LIGHT_ON:
        if (devName == "button")
        {
            setLightState(OFF);
            lightView->setLightState(getLightState());
        }
        break;
    }
}
