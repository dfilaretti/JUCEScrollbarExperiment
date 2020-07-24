#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
	addAndMakeVisible(viewport);
	viewport.setViewedComponent(&bigComponent);
	viewport.setScrollBarThickness(15);

	viewport.setPlaceScrollbarOverContent(true, true);
	viewport.sethHideScrollbarWhenNotScrolling(true, false); // broken if (true, true)

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
