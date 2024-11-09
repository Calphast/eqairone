/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Eqairv2AudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    Eqairv2AudioProcessorEditor (Eqairv2AudioProcessor&);
    ~Eqairv2AudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Eqairv2AudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Eqairv2AudioProcessorEditor)
};
