[](../header.md ':include')

# cf_sound_get_sample_index

Category: [audio](/api_reference?id=audio)  
GitHub: [cute_audio.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_audio.h)  
---

Returns the index of the currently playing sample for the sound.

```cpp
uint64_t cf_sound_get_sample_index(CF_Sound sound);
```

Parameters | Description
--- | ---
sound | The sound.

## Remarks

You can set a sound's playing index with [cf_sound_set_sample_index](/audio/cf_sound_set_sample_index.md). This can be useful to sync a dynamic audio system that
can turn on/off different instruments or sounds.

## Related Pages

[CF_SoundParams](/audio/cf_soundparams.md)  
[CF_Sound](/audio/cf_sound.md)  
[cf_sound_params_defaults](/audio/cf_sound_params_defaults.md)  
[cf_play_sound](/audio/cf_play_sound.md)  
[cf_sound_is_active](/audio/cf_sound_is_active.md)  
[cf_sound_get_is_paused](/audio/cf_sound_get_is_paused.md)  
[cf_sound_get_is_looped](/audio/cf_sound_get_is_looped.md)  
[cf_sound_get_volume](/audio/cf_sound_get_volume.md)  
[cf_sound_set_volume](/audio/cf_sound_set_volume.md)  
[cf_sound_set_sample_index](/audio/cf_sound_set_sample_index.md)  
[cf_sound_set_is_paused](/audio/cf_sound_set_is_paused.md)  
[cf_sound_set_is_looped](/audio/cf_sound_set_is_looped.md)  
