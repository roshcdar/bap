cmake_minimum_required(VERSION 3.12)
set(namespace "variables_340")
project("variables_340"
        DESCRIPTION "Variables for version 3.4.0 of subset 026"
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
set(CMAKE_PREFIX_PATH "../variables_230_340/install")
find_package(variables_230_340 CONFIG REQUIRED)
set(CMAKE_PREFIX_PATH "../variables_340_360/install")
find_package(variables_340_360 CONFIG REQUIRED)
include(GNUInstallDirs)
add_library(${PROJECT_NAME} SHARED)
target_sources(${PROJECT_NAME}
        PRIVATE
        src/null.cpp
        )
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src PUBLIC  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)
target_link_libraries(${PROJECT_NAME} PRIVATE variables_230_340_360::variables_230_340_360 variables_230_340::variables_230_340 variables_340_360::variables_340_360)
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
        include/NotVariableException.hpp
        include/ANvmaxredadh1.hpp
        include/ANvmaxredadh2.hpp
        include/ANvmaxredadh3.hpp
        include/ANvp12.hpp
        include/ANvp23.hpp
        include/DAdhesion.hpp
        include/DAxleload.hpp
        include/DCurrent.hpp
        include/DCycloc.hpp
        include/DDp.hpp
        include/DEmergencystop.hpp
        include/DEndtimerstartloc.hpp
        include/DGradient.hpp
        include/DLeveltr.hpp
        include/DLink.hpp
        include/DLoc.hpp
        include/DLrbg.hpp
        include/DLx.hpp
        include/DMamode.hpp
        include/DNvovtrp.hpp
        include/DNvpotrp.hpp
        include/DNvroll.hpp
        include/DNvstff.hpp
        include/DOl.hpp
        include/DPbd.hpp
        include/DPbdsr.hpp
        include/DPosoff.hpp
        include/DRbctr.hpp
        include/DRef.hpp
        include/DReverse.hpp
        include/DSectiontimerstoploc.hpp
        include/DSr.hpp
        include/DStartol.hpp
        include/DStartreverse.hpp
        include/DStatic.hpp
        include/DSuitability.hpp
        include/DTafdisplay.hpp
        include/DTextdisplay.hpp
        include/DTrackcond.hpp
        include/DTrackinit.hpp
        include/DTraction.hpp
        include/DTsr.hpp
        include/DValidnv.hpp
        include/GA.hpp
        include/GPbdsr.hpp
        include/LAckleveltr.hpp
        include/LAckmamode.hpp
        include/LAdhesion.hpp
        include/LAxleload.hpp
        include/LDoubtover.hpp
        include/LDoubtunder.hpp
        include/LEndsection.hpp
        include/LLx.hpp
        include/LMamode.hpp
        include/LMessage.hpp
        include/LNvkrint.hpp
        include/LPacket.hpp
        include/LPbdsr.hpp
        include/LReversearea.hpp
        include/LSection.hpp
        include/LStoplx.hpp
        include/LTafdisplay.hpp
        include/LTextdisplay.hpp
        include/LText.hpp
        include/LTrackcond.hpp
        include/LTrain.hpp
        include/LTrainint.hpp
        include/LTsr.hpp
        include/MAck.hpp
        include/MAdhesion.hpp
        include/MAirtight.hpp
        include/MAxleloadcat.hpp
        include/MCurrent.hpp
        include/MError.hpp
        include/MLevel.hpp
        include/MLeveltextdisplay.hpp
        include/MLeveltr.hpp
        include/MLinegauge.hpp
        include/MLoadinggauge.hpp
        include/MLoc.hpp
        include/MMamode.hpp
        include/MMode.hpp
        include/MModetextdisplay.hpp
        include/MNvavadh.hpp
        include/MNvcontact.hpp
        include/MNvderun.hpp
        include/MNvebcl.hpp
        include/MNvkrint.hpp
        include/MNvktint.hpp
        include/MNvkvint.hpp
        include/MPlatform.hpp
        include/MPosition.hpp
        include/MTrackcond.hpp
        include/MVersion.hpp
        include/MVoltage.hpp
        include/NAxle.hpp
        include/NcCddiff.hpp
        include/NcCdtrain.hpp
        include/NcDiff.hpp
        include/NcTrain.hpp
        include/NidBg.hpp
        include/NidC.hpp
        include/NidCtraction.hpp
        include/NidEm.hpp
        include/NidEngine.hpp
        include/NidLrbg.hpp
        include/NidLtrbg.hpp
        include/NidLx.hpp
        include/NidMessage.hpp
        include/NidMn.hpp
        include/NidNtc.hpp
        include/NidOperational.hpp
        include/NidPacket.hpp
        include/NidPrvlrbg.hpp
        include/NidRadio.hpp
        include/NidRbc.hpp
        include/NidTextmessage.hpp
        include/NidTsr.hpp
        include/NIter.hpp
        include/QConftextdisplay.hpp
        include/QDangerpoint.hpp
        include/QDiff.hpp
        include/QDir.hpp
        include/QDirlrbg.hpp
        include/QDirtrain.hpp
        include/QDlrbg.hpp
        include/QEmergencystop.hpp
        include/QEndtimer.hpp
        include/QFront.hpp
        include/QGdir.hpp
        include/QLength.hpp
        include/QLgtloc.hpp
        include/QLinkorientation.hpp
        include/QLinkreaction.hpp
        include/QLocacc.hpp
        include/QLxstatus.hpp
        include/QMamode.hpp
        include/QMarqstreason.hpp
        include/QMposition.hpp
        include/QNewcountry.hpp
        include/QNvdriverAdhes.hpp
        include/QNvemrrls.hpp
        include/QNvguiperm.hpp
        include/QNvinhsmicperm.hpp
        include/QNvkint.hpp
        include/QNvkvintset.hpp
        include/QNvlocacc.hpp
        include/QNvsbfbperm.hpp
        include/QNvsbtsmperm.hpp
        include/QOrientation.hpp
        include/QOverlap.hpp
        include/QPbdsr.hpp
        include/QPlatform.hpp
        include/QRbc.hpp
        include/QScale.hpp
        include/QSectiontimer.hpp
        include/QSleepsession.hpp
        include/QStatus.hpp
        include/QStoplx.hpp
        include/QSuitability.hpp
        include/QTextclass.hpp
        include/QTextconfirm.hpp
        include/QTextdisplay.hpp
        include/QText.hpp
        include/QTextreport.hpp
        include/QTrackinit.hpp
        include/TCycloc.hpp
        include/TCycrqst.hpp
        include/TEndtimer.hpp
        include/TLoa.hpp
        include/TMar.hpp
        include/TNvcontact.hpp
        include/TNvovtrp.hpp
        include/TOl.hpp
        include/TSectiontimer.hpp
        include/TTextdisplay.hpp
        include/TTimeoutrqst.hpp
        include/TTrain.hpp
        include/VAxleload.hpp
        include/VDiff.hpp
        include/VLoa.hpp
        include/VLx.hpp
        include/VMamode.hpp
        include/VMaxtrain.hpp
        include/VNvallowovtrp.hpp
        include/VNvkvint.hpp
        include/VNvlimsuperv.hpp
        include/VNvonsight.hpp
        include/VNvrel.hpp
        include/VNvshunt.hpp
        include/VNvstff.hpp
        include/VNvsupovtrp.hpp
        include/VNvunfit.hpp
        include/VReleasedp.hpp
        include/VReleaseol.hpp
        include/VReverse.hpp
        include/VStatic.hpp
        include/VTrain.hpp
        include/VTsr.hpp
        include/XText.hpp
        include/AllVariables.hpp
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