/* search */
void CHARACTER::EncodeInsertPacket(LPENTITY entity)
{
	[...]
	pack.dwVID		= m_vid;

/* add below */
#if defined(ENABLE_SHOW_MOB_LEVEL)
	if (IsMonster() || IsStone())
	{
		pack.dwLevel	= GetLevel();
	}
	else
	{
		pack.dwLevel	= 0;
	}
#endif