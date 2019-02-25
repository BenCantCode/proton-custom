#ifdef __cplusplus
extern "C" {
#endif
extern HSteamPipe cppISteamClient_SteamClient018_CreateSteamPipe(void *);
extern bool cppISteamClient_SteamClient018_BReleaseSteamPipe(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient018_ConnectToGlobalUser(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient018_CreateLocalUser(void *, HSteamPipe *, EAccountType);
extern void cppISteamClient_SteamClient018_ReleaseUser(void *, HSteamPipe, HSteamUser);
extern void *cppISteamClient_SteamClient018_GetISteamUser(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamGameServer(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient018_SetLocalIPBinding(void *, uint32, uint16);
extern void *cppISteamClient_SteamClient018_GetISteamFriends(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamUtils(void *, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamMatchmaking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamMatchmakingServers(void *, HSteamUser, HSteamPipe, const char *);
extern void * cppISteamClient_SteamClient018_GetISteamGenericInterface(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamUserStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamGameServerStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamApps(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamNetworking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamRemoteStorage(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamScreenshots(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamGameSearch(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient018_RunFrame(void *);
extern uint32 cppISteamClient_SteamClient018_GetIPCCallCount(void *);
extern void cppISteamClient_SteamClient018_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t);
extern bool cppISteamClient_SteamClient018_BShutdownIfAllPipesClosed(void *);
extern void *cppISteamClient_SteamClient018_GetISteamHTTP(void *, HSteamUser, HSteamPipe, const char *);
extern void * cppISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamController(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamUGC(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamAppList(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamMusic(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamMusicRemote(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamHTMLSurface(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(void *, void *);
extern void cppISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(void *, void *);
extern void cppISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess(void *, SteamAPI_CheckCallbackRegistered_t);
extern void *cppISteamClient_SteamClient018_GetISteamInventory(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamVideo(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamParentalSettings(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamInput(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient018_GetISteamParties(void *, HSteamUser, HSteamPipe, const char *);
#ifdef __cplusplus
}
#endif