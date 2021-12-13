#include"Switch.h"

Switch::Switch(GraphicsInfo* r_GfxInfo) :Component(r_GfxInfo)
{}

void Switch::Draw(UI* pUI)
{
	//Call output class and pass resistor drawing info to it.
	pUI->DrawSwitch(*m_pGfxInfo); //update to draw resistor

}

void Switch::Operate()
{

}

/* Saves the states of the component*/
void Switch::Save(ofstream& file) {
	file << "SWI " << m_Label << " " << (m_pGfxInfo->PointsList[0].x ) << " " << (m_pGfxInfo->PointsList[0].y) << endl;
}