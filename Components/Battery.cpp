#include"Battery.h"
Battery::Battery(GraphicsInfo* r_GfxInfo) :Component(r_GfxInfo)
{}

void Battery::Draw(UI* pUI)
{
	//Call output class and pass Battery drawing info to it.
	pUI->DrawBattery(*m_pGfxInfo); //update to draw Battery

}



void Battery::Save(ofstream& file) {
	file << "BATT " << m_Label << " " << (m_pGfxInfo->PointsList[0].x) << " " << (m_pGfxInfo->PointsList[0].y) << endl;
}

void Battery::Operate()
{

}