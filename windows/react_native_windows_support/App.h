#pragma once

#include "App.xaml.g.h"



namespace winrt::react_native_windows_support::implementation
{
    struct App : AppT<App>
    {
        App() noexcept;
    };
} // namespace winrt::react_native_windows_support::implementation


