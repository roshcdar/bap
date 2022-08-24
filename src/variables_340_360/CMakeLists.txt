cmake_minimum_required(VERSION 3.12)
set(namespace "variables_340_360")
project("variables_340_360"
        DESCRIPTION "Common variables for versions 3.4.0, 3.6.0, but not for 2.3.0"
        VERSION 1.0.0
        )
if (NOT CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    message(STATUS "This project has a top-level one called [${CMAKE_PROJECT_NAME}]")
else()
    message(STATUS "This project is a top-level one")
endif()
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_PREFIX_PATH "../variables_230_340_360/install")
find_package(variables_230_340_360 CONFIG REQUIRED)
include(GNUInstallDirs)
add_library(${PROJECT_NAME} SHARED)
target_sources(${PROJECT_NAME}
        PRIVATE
        src/ANvmaxredadh1.cpp
        src/ANvmaxredadh2.cpp
        src/ANvmaxredadh3.cpp
        src/ANvp12.cpp
        src/ANvp23.cpp
        src/DCurrent.cpp
        src/DLx.cpp
        src/DPbd.cpp
        src/DPbdsr.cpp
        src/GPbdsr.cpp
        src/LLx.cpp
        src/LNvkrint.cpp
        src/LPbdsr.cpp
        src/LStoplx.cpp
        src/MAxleloadcat.cpp
        src/MCurrent.cpp
        src/MLinegauge.cpp
        src/MNvavadh.cpp
        src/MNvebcl.cpp
        src/MNvkrint.cpp
        src/MNvktint.cpp
        src/MNvkvint.cpp
        src/MPlatform.cpp
        src/MPosition.cpp
        src/MVersion.cpp
        src/MVoltage.cpp
        src/NAxle.cpp
        src/NcCddiff.cpp
        src/NcCdtrain.cpp
        src/NidCtraction.cpp
        src/NidLx.cpp
        src/NidNtc.cpp
        src/NidOperational.cpp
        src/NidPrvlrbg.cpp
        src/NidTextmessage.cpp
        src/QConftextdisplay.cpp
        src/QDiff.cpp
        src/QLxstatus.cpp
        src/QMamode.cpp
        src/QMarqstreason.cpp
        src/QNvguiperm.cpp
        src/QNvinhsmicperm.cpp
        src/QNvkint.cpp
        src/QNvkvintset.cpp
        src/QNvlocacc.cpp
        src/QNvsbfbperm.cpp
        src/QNvsbtsmperm.cpp
        src/QPbdsr.cpp
        src/QPlatform.cpp
        src/QStoplx.cpp
        src/QTextreport.cpp
        src/VLx.cpp
        src/VNvkvint.cpp
        src/VNvlimsuperv.cpp
        )
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src PUBLIC  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)
target_link_libraries(${PROJECT_NAME} PRIVATE variables_230_340_360::variables_230_340_360)
if(DEFINED CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
    message(
            STATUS
            "CMAKE_INSTALL_PREFIX is not set\n"
            "Default value: ${CMAKE_INSTALL_PREFIX}\n"
            "Will set it to ${CMAKE_SOURCE_DIR}/install"
    )
    set(CMAKE_INSTALL_PREFIX
            "${CMAKE_SOURCE_DIR}/install"
            CACHE PATH "Where the library will be installed to" FORCE
            )
else()
    message(
            STATUS
            "CMAKE_INSTALL_PREFIX was already set\n"
            "Current value: ${CMAKE_INSTALL_PREFIX}"
    )
endif()
set(public_headers
        include/ANvmaxredadh1.hpp
        include/ANvmaxredadh2.hpp
        include/ANvmaxredadh3.hpp
        include/ANvp12.hpp
        include/ANvp23.hpp
        include/DCurrent.hpp
        include/DLx.hpp
        include/DPbd.hpp
        include/DPbdsr.hpp
        include/GPbdsr.hpp
        include/LLx.hpp
        include/LNvkrint.hpp
        include/LPbdsr.hpp
        include/LStoplx.hpp
        include/MAxleloadcat.hpp
        include/MCurrent.hpp
        include/MLinegauge.hpp
        include/MNvavadh.hpp
        include/MNvebcl.hpp
        include/MNvkrint.hpp
        include/MNvktint.hpp
        include/MNvkvint.hpp
        include/MPlatform.hpp
        include/MPosition.hpp
        include/MVersion.hpp
        include/MVoltage.hpp
        include/NAxle.hpp
        include/NcCddiff.hpp
        include/NcCdtrain.hpp
        include/NidCtraction.hpp
        include/NidLx.hpp
        include/NidNtc.hpp
        include/NidOperational.hpp
        include/NidPrvlrbg.hpp
        include/NidTextmessage.hpp
        include/QConftextdisplay.hpp
        include/QDiff.hpp
        include/QLxstatus.hpp
        include/QMamode.hpp
        include/QMarqstreason.hpp
        include/QNvguiperm.hpp
        include/QNvinhsmicperm.hpp
        include/QNvkint.hpp
        include/QNvkvintset.hpp
        include/QNvlocacc.hpp
        include/QNvsbfbperm.hpp
        include/QNvsbtsmperm.hpp
        include/QPbdsr.hpp
        include/QPlatform.hpp
        include/QStoplx.hpp
        include/QTextreport.hpp
        include/VLx.hpp
        include/VNvkvint.hpp
        include/VNvlimsuperv.hpp
        )
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER "${public_headers}")
set_target_properties(${PROJECT_NAME} PROPERTIES DEBUG_POSTFIX "d")
install(TARGETS ${PROJECT_NAME}
        EXPORT "${PROJECT_NAME}Targets"
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}
        INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
        )
install(EXPORT "${PROJECT_NAME}Targets"
        FILE "${PROJECT_NAME}Targets.cmake"
        NAMESPACE ${namespace}::
        DESTINATION cmake
        )

include(CMakePackageConfigHelpers)

# generate the version file for the config file
write_basic_package_version_file(
        "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
        VERSION "${version}"
        COMPATIBILITY AnyNewerVersion
)
# create config file
configure_package_config_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
        "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
        INSTALL_DESTINATION cmake
        )
# install config files
install(FILES
        "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
        "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
        DESTINATION cmake
        )
# generate the export targets for the build tree
export(EXPORT "${PROJECT_NAME}Targets"
        FILE "${CMAKE_CURRENT_BINARY_DIR}/cmake/${PROJECT_NAME}Targets.cmake"
        NAMESPACE ${namespace}::
        )