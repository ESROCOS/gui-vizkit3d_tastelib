/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef BODYSTATEPLUGINWRAPPER_H
#define BODYSTATEPLUGINWRAPPER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "typeDefinitions.h"

// Update function: returns VIZTASTE_XXX
int BodyStateVisualization_updateBodyState(const char* pluginName, const asn1_BodyState* state);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //BODYSTATEPLUGINWRAPPER_H
