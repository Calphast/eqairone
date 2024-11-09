/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
Eqairv2AudioProcessorEditor::Eqairv2AudioProcessorEditor (Eqairv2AudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (800, 600);
}

Eqairv2AudioProcessorEditor::~Eqairv2AudioProcessorEditor()
{
}

//==============================================================================
void Eqairv2AudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
    
    // there location + size of the spectrum
    juce::Rectangle<int> spectrumArea (20, 20, 760, 400);
    g.setColour (juce::Colours::bisque); // sets color of rectangle
    g.fillRect(spectrumArea);

    
    
    g.setFont (juce::FontOptions (15.0f));
}

void Eqairv2AudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
