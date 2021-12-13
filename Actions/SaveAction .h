#pragma once
#include "..\Actions\Action.h"
#include "..\ApplicationManager.h"
#include <fstream>

class SaveAction :public Action
{
private:
	ofstream Write;
	
public:
	SaveAction(ApplicationManager* pApp); //Constructor

	virtual bool ReadSaveParameters();// Reads parameters required for action to execute

	virtual void Execute();  //Excute save


	// Undo action 
	virtual void Undo();

	// Redo action 
	virtual void Redo();

	// Destructor
	virtual ~SaveAction();



};