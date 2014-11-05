<?php
/**
 * @file
 * for_sale_by_owner_v1_1.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function for_sale_by_owner_v1_1_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_condition'
  $field_bases['field_condition'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_condition',
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
        'New' => 'New',
        'Like New' => 'Like New',
        'Excellent' => 'Excellent',
        'Very good' => 'Very Good',
        'good' => 'Good',
        'Fair' => 'Fair',
        'Salvage' => 'Salvage',
        'Other' => 'Other..',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_price'
  $field_bases['field_price'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_price',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  return $field_bases;
}
