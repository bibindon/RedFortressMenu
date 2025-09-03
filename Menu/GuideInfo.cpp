#include "Menu.h"

using namespace NSMenu;

std::wstring NSMenu::GuideInfo::GetId()
{
    return m_id;
}

void NSMenu::GuideInfo::SetId(const std::wstring& arg)
{
    m_id = arg;
}

std::wstring NSMenu::GuideInfo::GetCategory()
{
    return m_category;
}

void NSMenu::GuideInfo::SetCategory(const std::wstring& arg)
{
    m_category = arg;
}

std::wstring NSMenu::GuideInfo::GetSubCategory()
{
    return m_subCategory;
}

void NSMenu::GuideInfo::SetSubCategory(const std::wstring& arg)
{
    m_subCategory = arg;
}

std::wstring GuideInfo::GetDetail()
{
    return m_detail;
}

void GuideInfo::SetDetail(const std::wstring& arg)
{
    m_detail = arg;
}

