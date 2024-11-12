/* search */
void CInstanceBase::UpdateTextTailLevel(DWORD level)
{
	[...]
}

/* replace with this */

void CInstanceBase::UpdateTextTailLevel(DWORD level)
{
	static D3DXCOLOR s_kLevelColor = D3DXCOLOR(152.0f/255.0f, 255.0f/255.0f, 51.0f/255.0f, 1.0f);
#if defined(ENABLE_SHOW_MOB_LEVEL)
	static D3DXCOLOR s_kMobLevelColor = D3DXCOLOR(119.0f / 255.0f, 246.0f / 255.0f, 168.0f / 255.0f, 1.0f);
#endif
	char szText[256];
	sprintf(szText, "Lv %d ", level);

	if (IsPC())
	{
		CPythonTextTail::Instance().AttachLevel(GetVirtualID(), szText, s_kLevelColor);
	}
#ifdef ENABLE_SHOW_MOB_LEVEL
	else if (IsEnemy() || IsStone())
	{
		CPythonTextTail::Instance().AttachLevel(GetVirtualID(), szText, s_kMobLevelColor);
	}
#endif
}