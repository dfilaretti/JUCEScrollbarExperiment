#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
	addAndMakeVisible(viewport);
	viewport.setViewedComponent(&bigComponent);
	viewport.setScrollBarThickness(25);

	viewport.setPlaceScrollbarOverContent(false, true);
	viewport.sethHideScrollbarWhenNotScrolling(false, true);

	setSize(400, 400);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    g.fillAll(Colours::yellow);
}

void MainComponent::resized()
{
    const auto area = getLocalBounds();

    viewport.setBounds(area);
}
