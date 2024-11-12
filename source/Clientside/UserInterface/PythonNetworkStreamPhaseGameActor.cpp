/* search */
	kNetActorData.m_dwLevel = 0; // ??? ?? ?? ??


/* replace with this */
#if defined(ENABLE_SHOW_MOB_LEVEL)
	kNetActorData.m_dwLevel = chrAddPacket.dwLevel;
#else
	kNetActorData.m_dwLevel = 0; // ??? ?? ?? ??
#endif