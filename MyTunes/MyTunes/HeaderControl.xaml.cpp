﻿#include "pch.h"
#include "HeaderControl.xaml.h"
#if __has_include("HeaderControl.g.cpp")
#include "HeaderControl.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::MyTunes::implementation
{
    HeaderControl::HeaderControl()
    {
        InitializeComponent();
    }

    int32_t HeaderControl::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void HeaderControl::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}
