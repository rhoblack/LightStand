#ifndef __LIGHTVIEW_H__
#define __LIGHTVIEW_H__

#include "Led.h"

enum {OFF, ON};

class LightView
{
private:
    Led *lightLed;
    int lightState;

public:
    LightView(Led *led);
    virtual ~LightView();
    void On();
    void Off();
    void run();
public:
    int getLightState() const { return lightState; }
    void setLightState(int lightState_) { lightState = lightState_; }
};

#endif /* __LIGHTVIEW_H__ */
