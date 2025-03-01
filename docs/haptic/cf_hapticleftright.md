[](../header.md ':include')

# CF_HapticLeftRight

Category: [haptic](/api_reference?id=haptic)  
GitHub: [cute_haptics.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_haptics.h)  
---

The leftright haptic allows direct control of one larger and one smaller freqeuncy motors, as commonly found in game controllers.

Struct Members | Description
--- | ---
`int duration_milliseconds` | The delay between `attack` and `fade` in the envelope (see [CF_HapticEnvelope](/haptic/cf_hapticenvelope.md) for more details).
`float lo_motor_strength` | From 0.0f to 1.0f.
`float hi_motor_strength` | From 0.0f to 1.0f.

## Related Pages

[CF_Haptic](/haptic/cf_haptic.md)  
[CF_HapticType](/haptic/cf_haptictype.md)  
[cf_haptic_open](/haptic/cf_haptic_open.md)  
[cf_haptic_close](/haptic/cf_haptic_close.md)  
[CF_HapticEffect](/haptic/cf_hapticeffect.md)  
[cf_haptic_create_effect](/haptic/cf_haptic_create_effect.md)  
