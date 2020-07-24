#pragma once

#include <JuceHeader.h>

using namespace juce;

class BigComponent : public Component
{
public:

    BigComponent()
    {
        setSize(600, 600);
    }

    void paint(Graphics& g) override
    {
        const auto area = getLocalBounds().toFloat();
        g.fillCheckerBoard(area, 50, 50, Colours::black, Colours::white);
    }

    void resized() override {};
};

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent  : public juce::Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    //==============================================================================
    // Your private member variables go here...
    Viewport viewport;
    BigComponent bigComponent;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
