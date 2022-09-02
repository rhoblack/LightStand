#ifndef __STANDSERVICE_H__
#define __STANDSERVICE_H__

#include <string>
#include "LightView.h"

enum {LIGHT_OFF, LIGHT_ON};

class StandService
{
private:
    int lightState;
    LightView *lightView;

public:
    StandService(LightView *view);
    virtual ~StandService();
    void notify(std::string devName);
    int getLightState() const { return lightState; }
    void setLightState(int lightState_) { lightState = lightState_; }

};

#endif /* __STANDSERVICE_H__ */
