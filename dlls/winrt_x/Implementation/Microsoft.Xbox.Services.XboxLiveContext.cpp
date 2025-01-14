#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveContext.h"

#include "Microsoft.Xbox.Services.Presence.PresenceService.h"
#include "Microsoft.Xbox.Services.XboxLiveContext.g.cpp"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerService.h"
#include "Microsoft.Xbox.Services.Social.SocialService.h"

// WARNING: This file is automatically generated by a tool. Do not directly
// add this file to your project, as any changes you make will be lost.
// This file is a stub you can use as a starting point for your implementation.
//
// To add a copy of this file to your project:
//   1. Copy this file from its original location to the location where you store 
//      your other source files (e.g. the project root). 
//   2. Add the copied file to your project. In Visual Studio, you can use 
//      Project -> Add Existing Item.
//   3. Delete this comment and the 'static_assert' (below) from the copied file.
//      Do not modify the original file.
//
// To update an existing file in your project:
//   1. Copy the relevant changes from this file and merge them into the copy 
//      you made previously.
//    
// This assertion helps prevent accidental modification of generated files.
////static_assert(false, "This file is generated by a tool and will be overwritten. Open this error and view the comment for assistance.");

namespace winrt::Microsoft::Xbox::Services::implementation
{
    XboxLiveContext::XboxLiveContext(winrt::Windows::Xbox::System::User const& user)
    {
        printf("[Microsoft::Xbox::Services::XboxLiveContext] Constructor called\n");
    }
    winrt::Windows::Xbox::System::User XboxLiveContext::User()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Social::ProfileService XboxLiveContext::ProfileService()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Social::SocialService XboxLiveContext::SocialService()
    {
        return winrt::make<winrt::Microsoft::Xbox::Services::Social::implementation::SocialService>( );
    }
    winrt::Microsoft::Xbox::Services::Social::ReputationService XboxLiveContext::ReputationService()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementService XboxLiveContext::AchievementService()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardService XboxLiveContext::LeaderboardService()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::UserStatistics::UserStatisticsService XboxLiveContext::UserStatisticsService()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Matchmaking::MatchmakingService XboxLiveContext::MatchmakingService()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerService XboxLiveContext::MultiplayerService()
    {
        return winrt::make<winrt::Microsoft::Xbox::Services::Multiplayer::implementation::MultiplayerService>( );
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentService XboxLiveContext::TournamentService()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivityService XboxLiveContext::RealTimeActivityService()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Presence::PresenceService XboxLiveContext::PresenceService()
    {
		return winrt::make<Presence::implementation::PresenceService>( );
    }
    winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerPlatformService XboxLiveContext::GameServerPlatformService()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageService XboxLiveContext::TitleStorageService()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Privacy::PrivacyService XboxLiveContext::PrivacyService()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::System::StringService XboxLiveContext::StringService()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchService XboxLiveContext::ContextualSearchService()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Clubs::ClubsService XboxLiveContext::ClubsService()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Marketplace::CatalogService XboxLiveContext::CatalogService()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Marketplace::InventoryService XboxLiveContext::InventoryService()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::EntertainmentProfile::EntertainmentProfileListService XboxLiveContext::EntertainmentProfileListService()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::XboxLiveContextSettings XboxLiveContext::Settings()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::XboxLiveAppConfiguration XboxLiveContext::AppConfig()
    {
        throw hresult_not_implemented();
    }
}
