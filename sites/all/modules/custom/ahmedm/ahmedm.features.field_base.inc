<?php
/**
 * @file
 * ahmedm.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ahmedm_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_category_romance_iam'
  $field_bases['field_category_romance_iam'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_category_romance_iam',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Man' => 'Man',
        'Woman' => 'Woman',
        'Halal' => 'Halal',
        'Haram' => 'Haram',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_category_romance_seeking'
  $field_bases['field_category_romance_seeking'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_category_romance_seeking',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Man' => 'Man',
        'Woman' => 'Woman',
        'Halal' => 'Halal',
        'Haram' => 'Haram',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
