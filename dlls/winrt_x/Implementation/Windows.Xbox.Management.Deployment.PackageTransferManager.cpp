#include "pch.h"
#include "Windows.Xbox.Management.Deployment.PackageTransferManager.h"
#include "Windows.Xbox.Management.Deployment.PackageTransferManager.g.cpp"

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
//static_assert(false, "This file is generated by a tool and will be overwritten. Open this error and view the comment for assistance.");

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::CheckForUpdateResult> PackageTransferManager::CheckForUpdateAsync(winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage package)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::RequestUpdatePackageResult> PackageTransferManager::RequestUpdatePackageAsync(winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage package)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::RequestUpdatePackageResult> PackageTransferManager::RequestUpdateCurrentPackageAsync()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferManager PackageTransferManager::Current()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferManager PackageTransferManager::Create(winrt::Windows::ApplicationModel::Package const& package)
    {
        throw hresult_not_implemented();
    }
    void PackageTransferManager::UpdateInstallOrder(winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& chunkIds, winrt::Windows::Xbox::Management::Deployment::UpdateInstallOrderBehavior const& updateBehavior)
    {
        throw hresult_not_implemented();
    }
    bool PackageTransferManager::IsChunkInstalled(uint32_t chunkId)
    {
        throw hresult_not_implemented();
    }
    bool PackageTransferManager::AreChunksInstalled(winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& chunkIds)
    {
        throw hresult_not_implemented();
    }
    uint32_t PackageTransferManager::FindChunkFromFile(hstring const& path)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferStatus PackageTransferManager::TransferStatus()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferType PackageTransferManager::TransferType()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers PackageTransferManager::AvailableChunkSpecifiers()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::InstallationState PackageTransferManager::GetInstallationState(winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& chunkIds)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::InstallationState PackageTransferManager::GetInstallationState(winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers const& specifiers)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher> PackageTransferManager::AddChunkSpecifiersAsync(winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers additionalSpecifiers)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction PackageTransferManager::RemoveChunkSpecifiersAsync(winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers removeSpecifiers)
    {
        throw hresult_not_implemented();
    }
}