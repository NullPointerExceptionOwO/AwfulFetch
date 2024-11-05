workspace "AwfulFetch"
   configurations { "Debug", "Release" }

project "AwfulFetch"
   kind "ConsoleApp"
   language "C++"
   targetdir "out/%{cfg.buildcfg}"

   warnings "Extra"

   files { "**.hpp", "**.cpp" }

   includedirs { "include" }

   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"
