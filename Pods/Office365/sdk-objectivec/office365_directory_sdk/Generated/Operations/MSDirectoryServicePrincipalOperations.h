/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * Licensed under the Apache License, Version 2.0.
 * See License.txt in the project root for license information.
 *
 * Warning: This code was generated automatically. Edits will be overwritten.
 * To make changes to this code, please make changes to the generation framework itself:
 * https://github.com/MSOpenTech/odata-codegen
 *******************************************************************************/

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryServicePrincipal.h"
#import "MSDirectoryDirectoryObjectOperations.h"

#import "MSDirectoryAppRole.h"
#import "MSDirectoryKeyCredential.h"
#import "MSDirectoryOAuth2Permission.h"
#import "MSDirectoryPasswordCredential.h"
#import "MSDirectoryAppRoleAssignment.h"
#import "MSDirectoryOAuth2PermissionGrant.h"

/**
* The header for type MSDirectoryServicePrincipalOperations.
*/

@interface MSDirectoryServicePrincipalOperations : MSDirectoryDirectoryObjectOperations

-(id)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end