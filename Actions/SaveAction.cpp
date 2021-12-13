#include"SaveAction .h"
SaveAction::SaveAction(ApplicationManager* pApp) : Action(pApp) //constructor
{

}
// Reads parameters required for action to execute 
bool SaveAction::ReadSaveParameters()
{
	return true;
}

////////////////////////////////////////////////
void SaveAction::Execute() 
{

	Write.open("Circuit information.txt");        //file name                                        

	Write.clear();

	pManager->Save(Write);
	//Write << "-1\n";
	pManager->GetUI()->PrintMsg("saved");

	 
}
// Undo action 
void SaveAction::Undo()
{
	return;
}

// Redo action 
void SaveAction::Redo() 
{
	return;
}

// Destructor 
SaveAction::~SaveAction() {
	Write.close();
}