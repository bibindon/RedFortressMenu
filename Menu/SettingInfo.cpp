#include "Menu.h"

using namespace NSMenu;

std::wstring NSMenu::SettingInfo::GetId()
{
    return m_id;
}

void NSMenu::SettingInfo::SetId(const std::wstring& arg)
{
    m_id = arg;
}

std::wstring NSMenu::SettingInfo::GetCategory()
{
    return m_category;
}

void NSMenu::SettingInfo::SetCategory(const std::wstring& arg)
{
    m_category = arg;
}

std::wstring NSMenu::SettingInfo::GetSubCategory()
{
    return m_subCategory;
}

void NSMenu::SettingInfo::SetSubCategory(const std::wstring& arg)
{
    m_subCategory = arg;
}

std::wstring SettingInfo::GetDetail()
{
    return m_detail;
}

void SettingInfo::SetDetail(const std::wstring& arg)
{
    m_detail = arg;
}

