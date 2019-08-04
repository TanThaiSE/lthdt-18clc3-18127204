#include "CFolder.h"
CFolder::CFolder(string x)
{
	name = x;
}
void CFolder::add(CItem* item)
{
	subItems.push_back(item);
}
void CFolder::print(int x)
{
	if (x == 0)
	{
		cout << "Not show";
	}
}
void CFolder::setHidden(bool x, bool y)
{
	if (x == true && y == true)
	{
		for (int i = 0; i < subItems.size(); i++)
		{
			CItem* p = new CItem;
			if (p->get_hidden() == true)
			{
				subItems.push_back(p);
			}
		}
	}
}
CItem* CFolder::removeByName(string x)
{
	CItem* ans = NULL;
	for (int i = 0; i < subItems.size(); i++)
	{
		if (subItems[i]->get_name() == x)
		{
			ans=*subItems.erase(subItems.begin() +i);
		}
	}
	if (ans == NULL)
	{
		for (int i = 0; i < subItems.size(); i++)
		{
			ans = subItems[i]->removeByName(x);
			if (ans != NULL)
			{
				break;
			}
		}
	}
	return ans;
}
CItem* CFolder::findByName(string x)
{
	CItem* ans = NULL;
	for (int i = 0; i < subItems.size(); i++)
	{
		if (subItems[i]->get_name() == x)
		{
			ans = subItems[i];
		}
	}
	if (ans == NULL)
	{
		for (int i = 0; i < subItems.size(); i++)
		{
			ans = subItems[i]->findByName(x);
			if (ans != NULL)
			{
				break;
			}
		}
	}
	return ans;
}
CFolder::CFolder()
{
}


CFolder::~CFolder()
{
}
