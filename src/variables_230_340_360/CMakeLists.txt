cmake_minimum_required(VERSION 3.12)
set(namespace "variables_230_340_360")
project("variables_230_340_360"
        DESCRIPTION "Common variables for versions 2.3.0, 3.4.0, 3.6.0"
        VERSION 1.0.0
        )
if (NOT CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    message(STATUS "This project has a top-level one called [${CMAKE_PROJECT_NAME}]")
else()
    message(STATUS "This project is a top-level one")
endif()
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
include(GNUInstallDirs)
add_library(${PROJECT_NAME} SHARED)
target_sources(${PROJECT_NAME}
        PRIVATE
        src/DAdhesion.cpp
        src/DAxleload.cpp
        src/DCycloc.cpp
        src/DDp.cpp
        src/DEmergencystop.cpp
        src/DEndtimerstartloc.cpp
        src/DGradient.cpp
        src/DLeveltr.cpp
        src/DLink.cpp
        src/DLoc.cpp
        src/DLrbg.cpp
        src/DMamode.cpp
        src/DNvovtrp.cpp
        src/DNvpotrp.cpp
        src/DNvroll.cpp
        src/DNvstff.cpp
        src/DOl.cpp
        src/DPosoff.cpp
        src/DRbctr.cpp
        src/DRef.cpp
        src/DReverse.cpp
        src/DSectiontimerstoploc.cpp
        src/DSr.cpp
        src/DStartol.cpp
        src/DStartreverse.cpp
        src/DStatic.cpp
        src/DSuitability.cpp
        src/DTafdisplay.cpp
        src/DTextdisplay.cpp
        src/DTrackcond.cpp
        src/DTrackinit.cpp
        src/DTraction.cpp
        src/DTsr.cpp
        src/DValidnv.cpp
        src/GA.cpp
        src/checkHexF.cpp
        src/checkHexNotAE.cpp
        src/LAckleveltr.cpp
        src/LAckmamode.cpp
        src/LAdhesion.cpp
        src/LAxleload.cpp
        src/LDoubtover.cpp
        src/LDoubtunder.cpp
        src/LEndsection.cpp
        src/LMamode.cpp
        src/LMessage.cpp
        src/LPacket.cpp
        src/LReversearea.cpp
        src/LSection.cpp
        src/LTafdisplay.cpp
        src/LText.cpp
        src/LTextdisplay.cpp
        src/LTrackcond.cpp
        src/LTrain.cpp
        src/LTrainint.cpp
        src/LTsr.cpp
        src/MAck.cpp
        src/MAdhesion.cpp
        src/MAirtight.cpp
        src/MError.cpp
        src/MLevel.cpp
        src/MLeveltextdisplay.cpp
        src/MLeveltr.cpp
        src/MLoadinggauge.cpp
        src/MLoc.cpp
        src/MMamode.cpp
        src/MMode.cpp
        src/MModetextdisplay.cpp
        src/MNvcontact.cpp
        src/MNvderun.cpp
        src/MTrackcond.cpp
        src/NcDiff.cpp
        src/NcTrain.cpp
        src/NidBg.cpp
        src/NidC.cpp
        src/NidEm.cpp
        src/NidEngine.cpp
        src/NidLrbg.cpp
        src/NidLtrbg.cpp
        src/NidMessage.cpp
        src/NidMn.cpp
        src/NidPacket.cpp
        src/NidRadio.cpp
        src/NidRbc.cpp
        src/NidTsr.cpp
        src/NIter.cpp
        src/NotVariableException.cpp
        src/QDangerpoint.cpp
        src/QDir.cpp
        src/QDirlrbg.cpp
        src/QDirtrain.cpp
        src/QDlrbg.cpp
        src/QEmergencystop.cpp
        src/QEndtimer.cpp
        src/QFront.cpp
        src/QGdir.cpp
        src/QLength.cpp
        src/QLgtloc.cpp
        src/QLinkorientation.cpp
        src/QLinkreaction.cpp
        src/QLocacc.cpp
        src/QMposition.cpp
        src/QNewcountry.cpp
        src/QNvdriverAdhes.cpp
        src/QNvemrrls.cpp
        src/QOrientation.cpp
        src/QOverlap.cpp
        src/QRbc.cpp
        src/QScale.cpp
        src/QSectiontimer.cpp
        src/QSleepsession.cpp
        src/QStatus.cpp
        src/QSuitability.cpp
        src/QTextclass.cpp
        src/QTextconfirm.cpp
        src/QText.cpp
        src/QTextdisplay.cpp
        src/QTrackinit.cpp
        src/TCycloc.cpp
        src/TCycrqst.cpp
        src/TEndtimer.cpp
        src/TMar.cpp
        src/TNvcontact.cpp
        src/TNvovtrp.cpp
        src/TOl.cpp
        src/TSectiontimer.cpp
        src/TTextdisplay.cpp
        src/TTimeoutrqst.cpp
        src/TTrain.cpp
        src/VAxleload.cpp
        src/VDiff.cpp
        src/VMamode.cpp
        src/VMaxtrain.cpp
        src/VNvallowovtrp.cpp
        src/VNvonsight.cpp
        src/VNvrel.cpp
        src/VNvshunt.cpp
        src/VNvstff.cpp
        src/VNvsupovtrp.cpp
        src/VNvunfit.cpp
        src/VReleasedp.cpp
        src/VReleaseol.cpp
        src/VReverse.cpp
        src/VStatic.cpp
        src/VTrain.cpp
        src/VTsr.cpp
        src/XText.cpp
        )
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src PUBLIC  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)
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
        include/checkHexF.hpp
        include/checkHexNotAE.hpp
        include/DAdhesion.hpp
        include/DAxleload.hpp
        include/DCycloc.hpp
        include/DDp.hpp
        include/DEmergencystop.hpp
        include/DEndtimerstartloc.hpp
        include/DGradient.hpp
        include/DLeveltr.hpp
        include/DLink.hpp
        include/DLoc.hpp
        include/DLrbg.hpp
        include/DMamode.hpp
        include/DNvovtrp.hpp
        include/DNvpotrp.hpp
        include/DNvroll.hpp
        include/DNvstff.hpp
        include/DOl.hpp
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
        include/LAckleveltr.hpp
        include/LAckmamode.hpp
        include/LAdhesion.hpp
        include/LAxleload.hpp
        include/LDoubtover.hpp
        include/LDoubtunder.hpp
        include/LEndsection.hpp
        include/LMamode.hpp
        include/LMessage.hpp
        include/LPacket.hpp
        include/LReversearea.hpp
        include/LSection.hpp
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
        include/MError.hpp
        include/MLevel.hpp
        include/MLeveltextdisplay.hpp
        include/MLeveltr.hpp
        include/MLoadinggauge.hpp
        include/MLoc.hpp
        include/MMamode.hpp
        include/MMode.hpp
        include/MModetextdisplay.hpp
        include/MNvcontact.hpp
        include/MNvderun.hpp
        include/MTrackcond.hpp
        include/NcDiff.hpp
        include/NcTrain.hpp
        include/NidBg.hpp
        include/NidC.hpp
        include/NidEm.hpp
        include/NidEngine.hpp
        include/NidLrbg.hpp
        include/NidLtrbg.hpp
        include/NidMessage.hpp
        include/NidMn.hpp
        include/NidPacket.hpp
        include/NidRadio.hpp
        include/NidRbc.hpp
        include/NidTsr.hpp
        include/NIter.hpp
        include/NotVariableException.hpp
        include/QDangerpoint.hpp
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
        include/QMposition.hpp
        include/QNewcountry.hpp
        include/QNvdriverAdhes.hpp
        include/QNvemrrls.hpp
        include/QOrientation.hpp
        include/QOverlap.hpp
        include/QRbc.hpp
        include/QScale.hpp
        include/QSectiontimer.hpp
        include/QSleepsession.hpp
        include/QStatus.hpp
        include/QSuitability.hpp
        include/QTextclass.hpp
        include/QTextconfirm.hpp
        include/QTextdisplay.hpp
        include/QText.hpp
        include/QTrackinit.hpp
        include/TCycloc.hpp
        include/TCycrqst.hpp
        include/TEndtimer.hpp
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
        include/VMamode.hpp
        include/VMaxtrain.hpp
        include/VNvallowovtrp.hpp
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
        include/Variable.hpp
        include/Variable.tpp)
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
