# DOSBOX extended

See the standard README for a full description of the official DOSBOX project.

Features added to the official project:

* hq4x scaler
* [Munt](http://sierrahelp.com/Utilities/Emulators/Munt.html) MT-32 emulator
* [Fluidsynth](http://www.fluidsynth.org/) midi emulator


## hq4x scaler

Scales a 320x200 display to 1280x800. Fluid on a modern machine.

    [render]
    scaler=hq4x

## Munt MT-32 emulator

Makes the Roland MT-32 sound far better.

	[midi]
	mididevice=mt32
	# path to the files MT32_CONTROL.ROM, MT32_PCM.ROM, CM32L_CONTROL.ROM, CM32L_PCM.ROM
	midiconfig=/home/me/.dosbox/
	mt32.thread=on
	mt32.dac=0

## Fluidsynth midi emulator

Uses samples to increase the midi emulation.
Use when MT32 is not available.

	[midi]
	mididevice=fluidsynth
	midiconfig=alsa:/usr/share/sounds/sf2/MT32_GS_2.51.sf2

The fluidsynth must be detected at configure time
or the feature won't be compiled in.
