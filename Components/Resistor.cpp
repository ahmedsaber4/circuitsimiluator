#include "Resistor.h"

Resistor::Resistor(GraphicsInfo *r_GfxInfo):Component(r_GfxInfo)
{}

void Resistor::Draw(UI* pUI)
{
	//Call output class and pass resistor drawing info to it.
	pUI->DrawResistor(*m_pGfxInfo); //update to draw resistor

}


void Resistor::Save(ofstream& file) {
	file << "RES " << m_Label << " " << (m_pGfxInfo->PointsList[0].x) << " " << (m_pGfxInfo->PointsList[0].y) << endl;
}

void Resistor::Operate()
{

}