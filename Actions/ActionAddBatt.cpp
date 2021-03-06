#include "ActionAddBatt.h"
#include "..\ApplicationManager.h"

ActionAddBatt::ActionAddBatt(ApplicationManager* pApp) :Action(pApp)
{
}

ActionAddBatt::~ActionAddBatt(void)
{
}

void ActionAddBatt::Execute()
{

	//Get a Pointer to the user Interfaces
	UI* pUI = pManager->GetUI();

	//Print Action Message
	pUI->PrintMsg("Adding a  Battery: Click anywhere to add");

	//Get Center point of the area where the Comp should be drawn
	pUI->GetPointClicked(Cx, Cy);

	//Clear Status Bar
	pUI->ClearStatusBar();


	GraphicsInfo* pGInfo = new GraphicsInfo(2); //Gfx info to be used to construct the Comp

	//Calculate the rectangle Corners
	int compWidth = pUI->getCompWidth();
	int compHeight = pUI->getCompHeight();

	pGInfo->PointsList[0].x = Cx - compWidth / 2;
	pGInfo->PointsList[0].y = Cy - compHeight / 2;
	pGInfo->PointsList[1].x = Cx + compWidth / 2;
	pGInfo->PointsList[1].y = Cy + compHeight / 2;

	Battery* pB = new Battery(pGInfo);
	pManager->AddComponent(pB);
}

void ActionAddBatt::Undo()
{}

void ActionAddBatt::Redo()
{}

