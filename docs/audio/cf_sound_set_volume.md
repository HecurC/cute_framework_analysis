# cf_sound_set_volume

Category: [audio](https://github.com/RandyGaul/cute_framework/blob/master/docs/api_reference?id=audio)  
GitHub: [cute_audio.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_audio.h)  
---

Sets the volume for the sound.

```cpp
void cf_sound_set_volume(CF_Sound sound, float volume);
```

Parameters | Description
--- | ---
sound | The sound.
volume | A value from 0.0f to 1.0f. 0.0f meaning silent, 1.0f meaning max volume.

## Remarks

You can get a sound's volume with [cf_sound_get_volume](https://github.com/RandyGaul/cute_framework/blob/master/docs/audio/cf_sound_get_volume.md).

## Related Pages

[CF_SoundParams](https://github.com/RandyGaul/cute_framework/blob/master/docs/audio/cf_soundparams.md)  
[CF_Sound](https://github.com/RandyGaul/cute_framework/blob/master/docs/audio/cf_sound.md)  
[cf_sound_params_defaults](https://github.com/RandyGaul/cute_framework/blob/master/docs/audio/cf_sound_params_defaults.md)  
[cf_play_sound](https://github.com/RandyGaul/cute_framework/blob/master/docs/audio/cf_play_sound.md)  
[cf_sound_is_active](https://github.com/RandyGaul/cute_framework/blob/master/docs/audio/cf_sound_is_active.md)  
[cf_sound_get_is_paused](https://github.com/RandyGaul/cute_framework/blob/master/docs/audio/cf_sound_get_is_paused.md)  
[cf_sound_get_is_looped](https://github.com/RandyGaul/cute_framework/blob/master/docs/audio/cf_sound_get_is_looped.md)  
[cf_sound_get_volume](https://github.com/RandyGaul/cute_framework/blob/master/docs/audio/cf_sound_get_volume.md)  
[cf_sound_get_sample_index](https://github.com/RandyGaul/cute_framework/blob/master/docs/audio/cf_sound_get_sample_index.md)  
[cf_sound_set_sample_index](https://github.com/RandyGaul/cute_framework/blob/master/docs/audio/cf_sound_set_sample_index.md)  
[cf_sound_set_is_paused](https://github.com/RandyGaul/cute_framework/blob/master/docs/audio/cf_sound_set_is_paused.md)  
[cf_sound_set_is_looped](https://github.com/RandyGaul/cute_framework/blob/master/docs/audio/cf_sound_set_is_looped.md)  