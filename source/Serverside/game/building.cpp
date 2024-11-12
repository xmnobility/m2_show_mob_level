/* search */
void CObject::EncodeInsertPacket(LPENTITY entity)
{
	[...]
	pack.dwVID          = m_dwVID;

/* add below */
#if defined(ENABLE_SHOW_MOB_LEVEL)
	pack.dwLevel	= 0;
#endif