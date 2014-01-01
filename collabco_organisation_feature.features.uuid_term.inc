<?php
/**
 * @file
 * collabco_organisation_feature.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function collabco_organisation_feature_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Partner',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '10182812-1e84-4661-bf26-96c1ee937e7c',
    'vocabulary_machine_name' => 'organisation_membership_type',
  );
  $terms[] = array(
    'name' => 'Provider, pending',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '24e6d63a-f193-4a36-9560-2e83e731bea9',
    'vocabulary_machine_name' => 'organisation_membership_type',
  );
  $terms[] = array(
    'name' => 'Partner, pending',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '32d083f0-869f-41d0-8c71-244dc2cdaf2a',
    'vocabulary_machine_name' => 'organisation_membership_type',
  );
  $terms[] = array(
    'name' => 'Provider',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6d2367b9-83b2-4715-833a-f20e39b12d19',
    'vocabulary_machine_name' => 'organisation_membership_type',
  );
  $terms[] = array(
    'name' => 'Member, Tier C',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9761bf44-8029-40a6-aa31-5f4bfec09cc7',
    'vocabulary_machine_name' => 'organisation_membership_type',
  );
  $terms[] = array(
    'name' => 'Member, Tier A',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'bd72e199-86de-4fda-a4aa-42e350414e84',
    'vocabulary_machine_name' => 'organisation_membership_type',
  );
  $terms[] = array(
    'name' => 'Member, Tier B',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd6d5dd92-5ca6-493e-9f79-12287158a821',
    'vocabulary_machine_name' => 'organisation_membership_type',
  );
  return $terms;
}
