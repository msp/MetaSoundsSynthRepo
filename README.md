# MetaSounds Synth Repo

A repositiory for collecting MetaSound synth engines and presets for use in games and interactive experiences.

## MetaSynthOne

[![MetaSynthOne video](https://img.youtube.com/vi/nrmiL575ntI/0.jpg)](https://www.youtube.com/watch?v=nrmiL575ntIE)

[demo video](https://www.youtube.com/watch?v=nrmiL575ntIE)

An open source, multitimbral, polyphonic synth loosely based on the excellent [AudioKit Synth One](https://audiokitpro.com/synth/) that runs inside Unreal Engine 5.

## Motivation

I wanted a process to aid sound design for my UE5 audiovisual projects. Each project is unique but having a repository of synth engines  & presets provides a strong foundation to help my workflow.

MetaSounds is UE5's built in procedural procedural audio engine. If you need a primer, I have an intro video course over on the Epic Learning Portal called a ["Unreal Engine MetaSounds"](https://dev.epicgames.com/community/learning/tutorials/Kw7l/unreal-engine-metasounds) and the [code samples](https://github.com/msp/6070-intro-to-metasounds?tab=readme-ov-file) are here on Github.

As at August 2024, MetaSounds don't support polyphony out of the box so you need to roll your own solution. Whilst MetaSounds support some native interaction with the wider engine, first class support for other core UE5 gameplay features (e.g. Sequencer and Blueprint Scripting) requires the MS to be wrapped in a Blueprint. The MetaSynthOne reference implementation here wraps up that plumbing and allows easy intergration with Unreal Motion Graphics (UMG) for creating User Interface widgets to control the synth engine at runtime. 

In short, I now have an extensibe way to design custom MetaSound Source sound engines, hook them up to gameplay interactions and publish custom UI widgets to allow me to tweak the sound in realtime. I can also do "offline" sound design to create standalone presets for recall later.

## Status

MetaSynthOne is fully functional and I'll be using it in my projects straight away. It's still an MVP and I'll learn more about how best to use it duration integrations. The code base is reasonable although the design is evolutionary as I gradually understood the possibilities and limitations. 

Currently, it's best to see this repo as a reference implementation or plumbing code you can reuse for your own work. After a little housekeeping, it will be possible for the repo to be opened up for contributions of MetaSynthOne presets or other sound engines / UIs and potentially packaged up into and UE plugin. 

## Install

1) Clone this repo using Github Desktop (a folder download *won't work* as we use Git LFS for assets)

<img src="https://media.githubusercontent.com/media/msp/6070-intro-to-metasounds/main/github-clone-in-desktop.png?raw=true" width="200">


2) Open `MetaSoundsSynthRepo.uproject` in Unreal Engine 5.3
3) Enable the [ViewModel](https://dev.epicgames.com/documentation/en-us/unreal-engine/umg-viewmodel) plugin
4) Run the project

## Migrate

You can migrate the code intro your own project by following along with the section around 12 mins into the ["Sharing & Reuse" video](https://dev.epicgames.com/community/learning/tutorials/Kw7l/unreal-engine-metasounds).

