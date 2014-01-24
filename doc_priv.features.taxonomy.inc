<?php
/**
 * @file
 * doc_priv.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function doc_priv_taxonomy_default_vocabularies() {
  return array(
    'ebo_categories' => array(
      'name' => 'eBO Categories',
      'machine_name' => 'ebo_categories',
      'description' => 'For documentation and videos',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
