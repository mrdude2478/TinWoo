
/*

    Plutonium library

    @file extras_Toast.hpp
    @brief An Overlay similar to Android's toast notifications
    @author XorTroll

    @copyright Plutonium project - an easy-to-use UI framework for Nintendo Switch homebrew

*/

#pragma once
#include <pu/ui/ui_Overlay.hpp>
#include <pu/ui/elm/elm_TextBlock.hpp>

namespace pu::ui::extras
{
    class Toast final : public Overlay
    {
        public:
            Toast(const std::string& Text, s32 FontSize, Color TextColor, Color BaseColor);
            PU_SMART_CTOR(Toast)

            void SetText(const std::string& Text);
            void OnPreRender(render::Renderer::Ref &Drawer);
            void OnPostRender(render::Renderer::Ref &Drawer);
        private:
            pu::ui::elm::TextBlock::Ref text;
    };
}