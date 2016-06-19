#include <AP_HAL/AP_HAL.h>
#include <AP_HAL/I2CDevice.h>
#include <AP_HAL/utility/OwnPtr.h>


#include <AP_PATTERN_REC.h>

class AP_PATTERN_REC
{
public:
    AP_PATTERN_REC(AP_HAL::OwnPtr<AP_HAL::I2CDevice> dev);

    /* AP_Baro public interface: */
    void update();
    void accumulate(void);

protected:
    AP_HAL::OwnPtr<AP_HAL::Device> _dev;
};
